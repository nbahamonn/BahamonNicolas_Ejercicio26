#include <iostream>

using namespace std;

void rellenar(int a,float **M);
void imprimeCabezas(int a,float **M);
void imprimir(int a,float **M);

int main(){
    int a;
    
    cout <<"Escriba un numero del 3 al 11" << endl;
    cin >> a;
    
    if(a >= 3 && a <= 11){
   
        float **M=new float *[a];
        
        for (int i=0;i<a;i++){
            M[i] =new float[a+2];
        }
    
        rellenar(a,M);
        imprimeCabezas(a,M);
		imprimir(a,M);
        
    }else{
        cout <<"El numero ingresado no esta en el rango solicitado" << endl;
    }
    
    return 0;
}

void rellenar(int a,float **M) {
    
    for(int i=0;i<a+2;i++){
        for(int j=0;j<a;j++){
            M[j][i] = j+i;
        }
    }

}

void imprimeCabezas(int a,float **M){
    
    float acumulador = 0;
    
    for(int i=0;i<a;i++){
        cout<<M[i][0]<<endl;
        
    }
	for(int i=0;i<a+2;i++){
        acumulador += M[0][i];
    }
    
    cout << "SUMA PRIMERA COLUMNA: " << acumulador << endl;
}

void imprimir(int a,float **M){
    
    for(int i=0;i<a+2;i++){
        for(int j=0;j<a;j++){
            cout<<M[j][i]<<" ";
        }
		cout<<endl;
    }

}