#include <fstream>
#include <iostream>
#include <string.h>
using namespace std; 

float * read_file(string filename, int *n_points);
void add_values(float *x, float *y, int n_points, float *M);

int main(){
  float *x=NULL;
  float *y=NULL;
  int n_x=0;
  int n_y=0;
  float *M = NULL;
        
  x = read_file("valores_x.txt", &n_x);
  y = read_file("valores_y.txt", &n_y);
  M = new float[20];
  
  add_values(x, y, n_x, M);
  
  return 0;
}

float * read_file(string filename, int *n_points){
  int n_lines=0;
  ifstream infile; 
  string line;
  int i;
  float *array;

  /*cuenta lineas*/
  infile.open(filename); 
  getline(infile, line);
  while(infile){
    n_lines++;
    getline(infile, line);
  }
  infile.close();
  *n_points = n_lines;

  /*reserva la memoria necesaria*/
  array = new float[n_lines];

  /*carga los valores*/
  i=0;
  infile.open(filename); 
  getline(infile, line);  
  while(infile){
    array[i] = atof(line.c_str());
    i++;
    getline(infile, line);
  }
  infile.close();

  return array;
}

void add_values(float *x,float *y, int n_points, float *M){
    
  for(int i=0;i<n_points;i++){
      M[i] = x[i]*y[i];
      cout << M[i] << endl;
  }
    
}