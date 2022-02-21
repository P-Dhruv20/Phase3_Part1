#include<stdio.h>
#include<iostream>
#include<string>
#include<vector>
#include<string.h>
using namespace std;

extern int yylex(void);
void yyerror(const char *msg);
extern int currLine;

char *identToken;
int numberToken;
int  count_names = 0;

enum Type { Integer, Array };
struct Symbol {
  std::string name;
  Type type;
};
struct Function {
  std::string name;
  std::vector<Symbol> declarations;
};

enum Assign {Normal, Operational};
struct Node {
  std::vector<std::string> operators;
  std::vector<std::string> src;
  std::string dst;
  Assign type;
};

std::vector <Function> symbol_table;
std::vector <Node> op;
std::vector <std::string> operands;

int k = 0;

int parenthesis() {
  for (int i = 1; i < operands.size(); i++) {
    if (operands[i] == "(") {
      return i;
    }
  }
  return -1;
}

void organize_into_nodes() {
  Node *node = new Node;
  Node *node_paren = new Node;
  int index = parenthesis();

  if (index > -1) {
    node_paren->dst = operands[0];
    node_paren->src.push_back(operands[index+1]);
    node_paren->src.push_back(operands[index+3]);
    node_paren->src.push_back(operands[index-2]);
    node_paren->operators.push_back(operands[index+2]);
    node_paren->operators.push_back(operands[index-1]);

    std::string temp_1 = "temp_" + to_string(k);
    k++;
    std::cout << ". " << temp_1 << endl;
    std::cout <<  node_paren->operators[0] << " ";
    std::cout << temp_1 << ", ";
    std::cout << node_paren->src[0] << ", ";
    std::cout << node_paren->src[1] << endl;

    std::string temp_2 = "temp_" + to_string(k);
    k++;
    std::cout << ". " << temp_2 << endl;
    std::cout <<  node_paren->operators[1] << " ";
    std::cout << temp_2 << ", ";
    std::cout << temp_1 << ", ";
    std::cout << node_paren->src[2] << endl;

    node_paren->src.erase(node_paren->src.begin());
    node_paren->operators.erase(node_paren->operators.begin());
    std::cout << "= " << node_paren->dst << ", " << temp_2 << endl;
  }
  else {
    for (int i = 1; i < operands.size(); i+=2) {
      node->src.push_back(operands[i]);

      if (i < (operands.size() - 1)) {
        node->operators.push_back(operands[i+1]);
      }
    }
    
    node->dst = operands[0];

    if (operands.size() == 2) {
      node->type = Normal;
    }
    else {
      node->type = Operational;
    }
    
    if (node->type == Normal) {
      std::cout << "= " << node->dst << ", " << node->src[0] << endl;
      return;
    }
    else {

      for (int i = 0; i < node->operators.size(); i++, k++) {
        std::string temp = "temp_" + to_string(k);
        std::cout << ". " << temp << endl;

        std::cout <<  node->operators[i] << " ";
        std::cout << temp << ", ";
        std::cout << node->src[0] << ", ";
        std::cout << node->src[1] << endl;

        node->src.erase(node->src.begin());
        node->src[0] = temp;
      }

      std::cout << "= " << node->dst << ", " << node->src[0] << endl;
    }
  }
  operands.clear();
}

Function *get_function() {
  int last;
  if((symbol_table.size()-1)==-1) last = 0;
  else last = symbol_table.size()-1;
  return &symbol_table[last];
}

bool find(std::string &value) {
  Function *f = get_function();
  for(int i=0; i < f->declarations.size(); i++) {
    Symbol *s = &f->declarations[i];
    if (s->name == value) {
      return true;
    }
  }
  return false;
}

void add_function_to_symbol_table(std::string &value) {
  Function f; 
  f.name = value; 
  symbol_table.push_back(f);
}

void add_variable_to_symbol_table(std::string &value, Type t) {
  Symbol s;
  s.name = value;
  s.type = t;
  Function *f = get_function();
  f->declarations.push_back(s);
}

void print_symbol_table(void) {
  printf("symbol table:\n");
  printf("--------------------\n");
  for(int i=0; i<symbol_table.size(); i++) {
    printf("function: %s\n", symbol_table[i].name.c_str());
    for(int j=0; j<symbol_table[i].declarations.size(); j++) {
      printf("  locals: %s\n", symbol_table[i].declarations[j].name.c_str());
    }
  }
  printf("--------------------\n");
}