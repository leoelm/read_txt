#include <iostream>
#include <fstream>
#include <string>
#include <ctype.h>
#include <math.h>
using namespace std;

void find_operator();
void remove_spaces();
void get_file();
void get_val();
void do_calc();
int breakpoint;
double val1 = 0;
double val2 = 0;
double res;
string clean_calc;
string calc;
string op;

int main(){
  ifstream file;

  file.open("test.txt");
  while(!file.eof()){
    std::getline(file, calc);
    remove_spaces();
    find_operator();
  }
  get_val();
  do_calc();
  std::cout << res;
  file.close();
  return 0;
}

void find_operator() {
  for(int i = 0; i < calc.length(); i++){
    if(clean_calc[i] == '+' || clean_calc[i]=='-'||clean_calc[i]=='/'||clean_calc[i]=='*'){
      op = clean_calc[i];
      breakpoint=i;
      break;
    }
  }
}

void remove_spaces() {
  for(int i = 0; i<calc.length();i++){
    if(calc[i]!=' '){
      clean_calc += calc[i];
    }
  }
}

void get_val(){
  for(int i = 0;i<breakpoint;i++){
    switch(clean_calc[i]){
      case '0': val1=val1*10;
                break;
      case '1': val1=val1*10;
                val1++;
                break;
      case '2': val1=val1*10;
                val1=val1+2;
                break;
      case '3': val1=val1*10;
                val1=val1+3;
                break;
      case '4': val1=val1*10;
                val1=val1+4;
                break;
      case '5': val1=val1*10;
                val1=val1+5;
                break;
      case '6': val1=val1*10;
                val1=val1+6;
                break;
      case '7': val1=val1*10;
                val1=val1+7;
                break;
      case '8': val1=val1*10;
                val1=val1+8;
                break;
      case '9': val1=val1*10;
                val1=val1+9;
                break;
      default: std::cout<<"error";
    }
  }
  for(int i = breakpoint+1;i<clean_calc.length();i++){
    switch(clean_calc[i]){
      case '0': val2=val2*10;
                break;
      case '1': val2=val2*10;
                val2++;
                break;
      case '2': val2=val2*10;
                val2=val2+2;
                break;
      case '3': val2=val2*10;
                val2=val2+3;
                break;
      case '4': val2=val2*10;
                val2=val2+4;
                break;
      case '5': val2=val2*10;
                val2=val2+5;
                break;
      case '6': val2=val2*10;
                val2=val2+6;
                break;
      case '7': val2=val2*10;
                val2=val2+7;
                break;
      case '8': val2=val2*10;
                val2=val2+8;
                break;
      case '9': val2=val2*10;
                val2=val2+9;
                break;
      default: std::cout<<"error";
    }
  }
}

void do_calc(){
  if(op[0] == '+'){
    res = val1+val2;
  }
  else if(op[0]=='-'){
    res = val1-val2;
  }
  else if(op[0] == '/'){
    res = val1/val2;
  }
  else if(op[0] == '*'){
    res = val1*val2;
  }
}
