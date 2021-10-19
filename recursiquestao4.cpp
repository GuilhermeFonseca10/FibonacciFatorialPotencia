#include<iostream>
using namespace std;

int fatorial(int n);
int fibonacci(int n);
int potencia(int a, int b);
int mdc(int x, int y);
int main(){

int valor, resultado;
valor=4;
resultado=fatorial(valor);
//fatorial
cout<<"Fatorial de "<<valor<<": "<<resultado;
cout<<"\n";
//fibonacci
cout<<"Resultado de fibonacci é :";
for(int i=0; i<valor; i++){
    cout<<fibonacci(i+1);
}
 cout<<"\n";
 //potencia
 int a,b;
 cout<<"Informe a base e o expoente :";
 cin>>a>>b;
 cout<<potencia(a, b)<<endl<<endl;
 cout<<"\n";
 //MDC
 int n1,n2;
 cout<<"Informe dois números: ";
 cin>>n1>>n2;
 cout<<"MDC: "<<mdc(n1,n2)<<endl;
    return 0;
}

int fatorial(int n){
if(n==0){
    return 1;
}
return n*fatorial(n-1);
}

int fibonacci(int n){
if(n==1 || n==2){
    return 1;
}
else{
    return fibonacci(n-1)+fibonacci(n-2);
}
}

int potencia(int a,int b){
   if(b==0){
    return 1;
}
else
    if(b==1){
       return a;
 }
 return a*potencia(a, b-1);
}

int mdc(int n1,int n2){
if(n1%n2==0){
 return n2;
}
else{
  return mdc(n2, n1%n2);

}
}


