#include <iostream>
#include <locale>

using namespace std;

int fib(int n){
    int f[n + 2];
    f[0] = 0;
    f[1] = 1;

    for(int i = 2; i <= n; i++){
        f[i] = f[i -1] + f[i -2];
    }
    return f[n];
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n = 10;
    cout<<"O "<<n<<"-ésimo número de fibonacci é: "<< fib(n) << endl;
    return 0;
}