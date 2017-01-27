#include <iostream>
#include <cmath>

using namespace std;


void cuadratica(double a, double b, double c){
	double result1, result2, sqrtdet;//sqrtdet es la raiz2 del determinante

	sqrtdet = double(sqrt (b*b - 4*a*c));//aqui calculo la raiz2 del determinante

	result1 = double((-b + sqrtdet)/ (2*a));
	result2 = double((-b - sqrtdet) / (2*a));  
	
	cout << "Solucion 1: " << result1 << endl;
	cout << "Solucion 2: " << result2 << endl;

}

bool hacetriangulo(double l1, double l2,double l3){
	int trian =0;
	if(l1 + l2 > l3 && l2 + l3 > l1 && l1 + l3 > l2)
		return 1;
	else
		return 0;

}

void calcularangulos(double a, double b, double c){
	double ang_a, ang_b, ang_c;
	double ca,cb,cc;

	ca = double( -1*(pow (a,2) - pow (b,2) - pow (c,2)) / (2*b*c));//calcular cosA
	ang_a = acos (ca);
	cout << "Angulo A en radianes: " <<  ang_a << endl;

	cb = double( -1*(pow (b,2) - pow (a,2) - pow (c,2)) / (2*a*c));// calcular cosB
	ang_b = acos (cb);
	cout << "Angulo B en radianes: " << ang_b << endl;

	cc = double( -1*(pow (c,2) - pow (a,2) - pow (b,2)) / (2*a*b));// calcular cosC
	ang_c = acos (cc);
	cout << "Angulo C en radianes: " << ang_c << endl;


}

void calcularangulos2(double a, double b, double c){
        double ang_a, ang_b, ang_c;
        double ca,cb,cc;

        ca = double( -1*(pow (a,2) - pow (b,2) - pow (c,2)) / (2*b*c));//calcular cosA
        ang_a = acos (ca) * (180/3.1416);
        cout << "Angulo A en grados: " <<  ang_a << endl;

        cb = double( -1*(pow (b,2) - pow (a,2) - pow (c,2)) / (2*a*c));// calcular cosB
        ang_b = acos (cb) * (180/3.1416);
        cout << "Angulo B en grados: " << ang_b << endl;

        cc = double( -1*(pow (c,2) - pow (a,2) - pow (b,2)) / (2*a*b));// calcular cosC
        ang_c = acos (cc) * (180/3.1416);
        cout << "Angulo C en grados: " << ang_c << endl;





}


void  eje3(double a, double b, double ang){
	double B;
	B = asin (b * sin (ang) / a);
	double ladob;
	ladob = a * sin (B) / sin (ang);
	double C;
	C = 180 - ang - ladob;
	double ladoc;
	ladoc = a * sin (C) / sin (ang);
	
	cout << "Angulo B = " << B << endl;
	cout << "Angulo C = " << C << endl;
	cout << "Lado c = " << ladoc << endl;

}

int main(){
	int op;
	op = 4;

	while(op!=0){
		cout << "Ingrese numero de ejercicio " << endl;
		cout << "Ej 1. Formula cuadratica" << endl;
		cout << "Ej 2. Angulos del triangulo" << endl;
		cout << "Ej 3. Lado y 2 angulos" << endl;
		cout << "0. Salir" << endl;
		cin >> op;
		switch(op){
			case 1:{
				cout << "Ingrese el primer numero ";
				double a;
				cin >> a;
				cout << "Ingrese el segundo numero ";
				double b;
				cin >> b;
				cout << "Ingrese el primer numero ";
				double c;
				cin >> c;
				cuadratica(a,b,c);
				break;
			}
			case 2:{
			cout << "Ingrese primer lado ";
			double lado1;
			cin >> lado1;
			cout << "Ingrese segundo lado ";
                        double lado2;
                        cin >> lado2;
			cout << "Ingrese tercer lado ";
                        double lado3;
                        cin >> lado3;
			if(hacetriangulo(lado1,lado2,lado3) == 1){
				calcularangulos(lado1,lado2,lado3);
				cout << endl;
				calcularangulos2(lado1,lado2,lado3);	
			}else{
				cout << "Error, no se puede hacer un triangulo" << endl;

			}

			
			break;
			}
			case 3:{
			cout << "Ingrese lado a";
			double l1;
			cin >> l1;
			cout << "Ingrese lado b";
			double l2;
			cin >> l2;
			cout << "Ingrese angulo A";
			double ang;
			cin >> ang;
			
			eje3(l1,l2,ang);
			break;
			}	
		}
	cout << endl;
	}
return 0;
}

