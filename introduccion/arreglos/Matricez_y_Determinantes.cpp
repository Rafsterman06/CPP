#include <iostream>
#include<array>
#include <string>
using namespace std;

class Operacion
{
  public:
	int entrada(){
		int num;
		cin >> num;
		return num;
	}
	void suma(){
		cout << "Ingresa el valor de \'m\'" << endl;
		int m = entrada();
		cout << "Ingresa el valor de \'n\'" << endl;
		int n = entrada();
		int a[m][n]={0.0};
		int b[m][n]={0.0};
		int c[m][n]={0.0};
		for (int i = 0; i < m; i++){
			for (int j = 0; j < n; j++){
				cout << "\'a\'[" << i << "][" << j << "]" << endl;
				a[i][j] = entrada();
			}
		}
		for (int i = 0; i < m; i++){
			for (int j = 0; j < n; j++){
				cout << "\'b\'[" << i << "][" << j << "]" << endl;
				b[i][j] = entrada();
			}
		}
		for (int i = 0; i < m; i++){
			for (int j = 0; j < n; j++){
				c[i][j] = a[i][j] + b[i][j];
			}
		}
		for (int i = 0; i < m; i++){
			for (int j = 0; j < n; j++){
				cout << c[i][j] << " " ;
			}
			cout << "" << endl;
		}
	}
	void resta(){
		cout << "Ingresa el valor de \'m\'" << endl;
		int m = entrada();
		cout << "Ingresa el valor de \'n\'" << endl;
		int n = entrada();
		int a[m][n]={0.0};
		int b[m][n]={0.0};
		int c[m][n]={0.0};
		for (int i = 0; i < m; i++){
			for (int j = 0; j < n; j++){
				cout << "\'a\'[" << i << "][" << j << "]" << endl;
				a[i][j] = entrada();
			}
		}
		for (int i = 0; i < m; i++){
			for (int j = 0; j < n; j++){
				cout << "\'b\'[" << i << "][" << j << "]" << endl;
				b[i][j] = entrada();
			}
		}
		for (int i = 0; i < m; i++){
			for (int j = 0; j < n; j++){
				c[i][j] = a[i][j] - b[i][j];
			}
		}
		for (int i = 0; i < m; i++){
			for (int j = 0; j < n; j++){
				cout << c[i][j] << " ";
			}
			cout << "" << endl;
		}
	}
	void multipicacion1(){
		cout << "ingresa el valor de x" << endl;
		int x = entrada();
		cout << "Ingresa el valor de \'m\'" << endl;
		int m = entrada();
		cout << "Ingresa el valor de \'n\'" << endl;
		int n = entrada();
		int a[m][n]={0.0};
		int b[m][n]={0.0};
		for (int i = 0; i < m; i++){
			for (int j = 0; j < n; j++){
				cout << "\'a\'[" << i << "][" << j << "]" << endl;
				a[i][j] = entrada();
			}
		}
		for (int i = 0; i < m; i++){
			for (int j = 0; j < n; j++){
				b[i][j] = x * a[i][j];
			}
		}
		for (int i = 0; i < m; i++){
			for (int j = 0; j < n; j++){
				cout << b[i][j] << " ";
			}
			cout << "" << endl;
		}
	}
	void multipicacion2(){
		cout << "Ingresa el valor de \'m\'" << endl;
		int m = entrada();
		cout << "Ingresa el valor de \'n\'" << endl;
		int n = entrada();
		int aux;
		int a[m][n];
		int b[m][n];
		int c[m][n];
		for (int i = 0; i < m; i++){
			for (int j = 0; j < n; j++){
				cout << "\'a\'[" << i << "][" << j << "]" << endl;
				a[i][j] = entrada();
			}
		}
		for (int i = 0; i < m; i++){
			for (int j = 0; j < n; j++){
				cout << "\'b\'[" << i << "][" << j << "]" << endl;
				b[i][j] = entrada();
			}
		}
		for (int i = 0; i < m; i++){
			for (int j = 0; j < n; j++){
				aux = 0;
				for (int k = 0; k < m; k++){
					aux = aux + a[i][k] * b[k][j];
				}
				c[i][j] = aux;
			}
		}
		for (int i = 0; i < m; i++){
			for (int j = 0; j < n; j++){
				cout << c[i][j] << " ";
			}
			cout << "" << endl;
		}
	}
};

int main(){
	Operacion op;
	int opc;
	cout << "1 suma \n2 resta \n3 multiplicacion 1\n4 multiplicacion 2 \n5 fin" << endl;
	bool loop = true;
	while (loop){
		opc = op.entrada();
		switch (opc){
		case 1:
			op.suma();
			break;
		case 2:
			op.resta();
			break;
		case 3:
			op.multipicacion1();
			break;
		case 4:
			op.multipicacion2();
			break;
		case 5:
			loop = false;
			break;
		}
	}
	int pausee;
	cin >> pausee;
	return 0;
}