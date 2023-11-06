//Mauricio Gael Villalobos Aguayo
#include <iostream>
#include <string> //se incluye la librería string para poder ingresar datos de este tipo
#include <math.h> //se incluye la libreria math para poder hacer raices, potencias y modulo de flotantes
using namespace std;
//las funciones se crean fuera del main, pero se llaman dentro del main
void problema1(){ //se hace una funcion void para que no regrese un valor, sino, un output de string
    cout<<"Hola mundo C++"<<endl;
}
int problema2(int x, int y){//se hace una funcion que devuelve un entero
    int suma=x+y; //se declara una funcion para hacer la suma de dos numeros
    return suma;//la funcion regresa el valor de la suma
}
float problema3(float m, float w){//se hace una funcion que regresa un valor flotante
    float area=m*w;//se crea una variable float para calcular el area
    return area;//la funcion regresa el area
}
void problema4(){//se hace una funcion void para poder regresar un string sin poner return
    cout<<"Introduce tu nombre:"<<endl;
    string minombre;//se crea la variable nombre
    cin>>minombre;//se le pide al usuario que ingrese su nombre con un input
    cout<<"Hola "<<minombre<<", bienvenido al mundo C++"<<endl;//se imprime el saludo y el nombre
}
void problema5(float a, float b){//se hace una funcion void por que se quiere regresar mas de un valor
    float s=a+b, r=a-b, m=a*b, d=a/b, mod;//se crea una variable float para cada operacion
    mod=fmod(a,b); //no es posible modulo de flotantes, se debe usar fmod de la libreria math.h
    cout<<"La suma de "<<a<<"+"<<b<<" es igual a "<<s<<endl;//se imprime la suma y su resultado
    cout<<"La resta de "<<a<<"-"<<b<<" es igual a "<<r<<endl;//se imprime la resta y su resultado
    cout<<"La multiplicacion de "<<a<<"*"<<b<<" es igual a "<<m<<endl;//se imprime la mult y su resultado
    cout<<"La division de "<<a<<"/"<<b<<" es igual a "<<d<<endl;//se imprime la div y su resultado
    cout<<"El modulo de "<<a<<"%"<<b<<" es igual a "<<mod<<endl;//se imprime el modulo y su resultado    
}
float problema6(float a, float b){//se crea una funcion para regresar un flotante
    float precio=a+(a*(b/100));;//se crea una variable flotante para calcular el precio
    return precio;//la funcion regresa el precio
}
void problema7(double a,double b){//se crea una funcion void para que termine con un texto
    cout<<"a es igual a "<<b<<endl<<"b es igual a "<<a<<endl;//pone valores invertidos de variables.
}
void problema8(double a,double b, double c, string nombre){//se crea una funcion que regresa un output
    double promedio = (a + b + c) / 3.0;// Calcula el promedio de las calificaciones
    cout.precision(2);// Configura la precisión de cout a 2 decimales
    cout << fixed; // Para que los números flotantes se muestren con dos decimales
    cout << "El promedio de " << nombre << " es: " << promedio << endl;// Despliega el resultado
    
}
float problema9(float ladoa, float ladob){//se crea una función que devuelve un float
    float hyp=sqrt(pow(ladoa,2)+pow(ladob,2));//se declara la variable hyp y se calcula la hipotenusa
    return hyp;//regresa el valor calculado de la hyp
}
double problema10(double x1, double y1, double x2, double y2){//se crea una funcion que devuelve double
    double dist=sqrt(pow((x2-x1),2)+pow((y2-y1),2));//se decalara y calcula la distancia
    return dist;//regresa la distancia
}
int main(){
    int menu;//se crea la variable menu para que el usuario elija la funcion
    //Se despliega el menu
    cout<<"Menu: "<<endl<<"1. Hello world"<<endl<<"2. Suma de dos numeros"<<endl;
    cout<<"3. Area de un rectangulo"<<endl<<"4. Tu nombre"<<endl<<"5. Operaciones aritméticas"<<endl;
    cout<<"6. Precio de un producto"<<endl<<"7. Intercambiar valor de variables"<<endl;
    cout<<"8. Promedio"<<endl<<"9. Hipotenusa"<<endl<<"10. Distancia dos puntos"<<endl;
    cout<<endl<<"Elige que programa ejecutar poniendo el numero de este:"<<endl;
    cin>>menu;//se le pide ingrese la funcion que desee ejecutar

    //se usa if, else if para que se ejecute una funcion dependiendo el numero que ingresó el usuario

    if (menu==1){
        problema1();//si elige la 1, solo se llama a la funcion, no tiene parametros y no necesita inputs
    }
    else if (menu==2)
    {
        int x,y;//se declaran variables para que el usuario ingrese los numeros deseados
        cout<<"dame el valor de x:"<<endl;
        cin>>x;
        cout<<"dame el valor de y:"<<endl;
        cin>>y;
        //despues de pedir los valores, estos ingresan como parametros en la funcion para que se ejecute
        cout<<"La suma de "<<x<<" y "<<y<<" es igual a "<<problema2(x,y)<<endl;
    }
    else if (menu==3)
    {
        float x,y;//se declaran variables para que el usuario ingrese los numeros deseados
        cout<<"Dame el largo del rectángulo: "<<endl;
        cin>>x;
        cout<<"Dame el alto del rectángulo: "<<endl;
        cin>>y;
        //despues de pedir los valores, estos ingresan como parametros en la funcion para que se ejecute
        cout<<"El area es de "<<problema3(x,y)<<endl;
    }
    else if (menu==4)
    {
        problema4();
    }
    else if (menu==5)
    {
        float a,b;//se declaran variables para que el usuario ingrese los numeros deseados
        cout<<"Introduce el primer numero:"<<endl;
        cin>>a;
        cout<<"Introduce el segundo numero:"<<endl;
        cin>>b;
        //despues de pedir los valores, estos ingresan como parametros en la funcion para que se ejecute
        problema5(a,b);
    }
    else if (menu==6)
    {
        float precio,iva;//se declaran variables para que el usuario ingrese los numeros deseados
        cout<<"Introduce el precio:"<<endl;
        cin>>precio;
        cout<<"Introduce el IVA"<<endl;
        cin>>iva;
        //despues de pedir los valores, estos ingresan como parametros en la funcion para que se ejecute
        cout<<"El precio de "<<precio<<" con el "<<iva<<" de IVA es de "<<problema6(precio,iva);
    }
    else if (menu==7){
        double a,b;//se declaran variables para que el usuario ingrese los numeros deseados
        cout<<"Dame el valor de la primer variable (a):"<<endl;
        cin>>a;
        cout<<"Dame el valor de la segunda variable (b):"<<endl;
        cin>>b;
        //despues de pedir los valores, estos ingresan como parametros en la funcion para que se ejecute
        problema7(a,b);
    }
    else if (menu==8)
    {
        double a,b,c;//se declaran variables para que el usuario ingrese los numeros deseados
        string nombre;//se declaran variables para que el usuario ingrese su nombre en string
        cout<<"Dame la calificacion 1:"<<endl;
        cin>>a;
        cout<<"Dame la calificacion 2:"<<endl;
        cin>>b;
        cout<<"Dame la calificacion 3:"<<endl;
        cin>>c;
        cout<<"Dame tu nombre:"<<endl;
        cin>>nombre;
        //despues de pedir los valores, estos ingresan como parametros en la funcion para que se ejecute
        problema8(a,b,c,nombre);
    }
    else if (menu==9){
        float a,b;//se declaran variables para que el usuario ingrese los numeros deseados
        cout<<"Dame el lado a:"<<endl;
        cin>>a;
        cout<<"Dame el lado b:"<<endl;
        cin>>b;
        //despues de pedir los valores, estos ingresan como parametros en la funcion para que se ejecute
        cout<<"El tirangulo de datos "<<a<<" y "<<b<<" tiene una hipotenusa de "<<problema9(a,b)<<endl;
    }
    else if(menu==10){
        double x1,x2,y1,y2;//se declaran variables para que el usuario ingrese los numeros deseados
        cout<<"Dame el valor de X1:"<<endl;
        cin>>x1;
        cout<<"Dame el valor de Y1:"<<endl;
        cin>>y1;
        cout<<"Dame el valor de X2:"<<endl;
        cin>>x2;
        cout<<"Dame el valor de Y2:"<<endl;
        cin>>y2;
        //se despliega el primer output describiendo que se mide y los puntos ingresados
        cout<<"La distancia entre ["<<x1<<","<<y1<<"] y ["<<x2<<","<<y2<<"] es ";
        //se pone cuantos decimales se esperan en el resultado
        cout.precision(2);
        //se acomoda el nuevo cout con los decimales deseados
        cout<<fixed;
        //despues de pedir los valores, estos ingresan como parametros en la funcion para que se ejecute
        cout<<problema10(x1,y1,x2,y2)<<endl;
    }
}