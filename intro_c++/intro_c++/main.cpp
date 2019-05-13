////
////  main.cpp
////  intro_c++
////
////  Created by Emerson Lopes on 09/05/19.
////  Copyright © 2019 Emerson Lopes. All rights reserved.
////
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main(int argc, const char * argv[])
//{
//    /*
//    int num;
//    cout << "please enter a number: ";
//    cin >> num;
//    cout << num << endl << "dudeee\n";
//    char name[101];
//     */
//
//    /*
//    string name;
//    int number = 2;
//    char lastName[101] =  "Lopes";
//    double numDecimal = 3.2;
//    float decimal = 2.2;
//    bool isMale = true;
//
//    cout << "please enter your name: ";
//    cin >> name;
//    cout << "your name is " << name << endl;
//    return 0;
//     */
//
//    /*
//    string phrase = "emerson lopes";
//
//    cout << phrase.length() << endl;
//    cout << phrase[2] << endl;
//    cout << phrase.size() << endl;
//
////    returns the first index found
//    cout << phrase.find("e") << endl;
////    start index, lenght
//    cout << phrase.substr(8, 3) << endl;
//     */
//
////    int numbers[] = {1,2,4,7,8};
//
//    vector <int> v = {9,34,54,12,45,34};
//    v.push_back(3);
//    v.insert(v.begin(), 100);
//    v.insert(v.end(), 100);
//
//    for (int n : v)
//    {
//        cout << n << endl;
//    }
//
////    sort(v.begin(), v.end());
//    sort(v.begin(), v.end(), greater<int>());
//
//    for (int n : v)
//    {
//        cout << n << endl;
//    }
//
//}
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iomanip>
//
//using namespace std;
//
//int main(int argc, const char * argv[])
//{
//    double a, b, c, d;
//    cout << fixed << setprecision(1);
//
//    cin >> a >> b >> c >> d;
//
//    // pesos 2, 3, 4 e 1
//    double media = (a * 2 + b * 3 + c * 4 + d * 1) / 10;
//    double nota;
//
//    cout << "Media: " << media << endl;
//
//    if(media >= 7.0)
//    {
//        cout << "Aluno aprovado.\n";
//    }
//    else if (media < 5.0)
//    {
//        cout << "Aluno reprovado.\n";
//    }
//    else {
//        cout << "Aluno em exame.\n";
//        double nota_final;
//        cin >> nota_final;
//
//        cout << "Nota do exame: " << nota_final << endl;;
//        nota = (nota_final + media) / 2;
//        if (nota > 5.0) {
//            cout << "Aluno aprovado.\n";
//        }
//        else {
//            cout << "Aluno reprovado.\n";
//        }
//
//        cout << "Media final: " << nota << endl;
//    }
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iomanip>
//
//using namespace std;
//
//int main(int argc, const char * argv[])
//{
//    int a, b, c;
//    cin >> a >> b >> c;
//
//    vector<int> num1 = {a, b, c};
//    vector<int> num2 = num1;
//
//    sort(num2.begin(), num2.end());
//
//    for(int n = 0; n < num2.size(); n++)
//    {
//        cout << num2[n] << endl;
//    }
//
//    cout << endl;
//
//    for(int n = 0; n < num2.size(); n++)
//    {
//        cout << num1[n] << endl;
//    }
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    string name;
//    cout << "enter your name: ";
//    getline(cin, name);
//    cout << "you name is " << name << endl;
//    return 0;
//}

//#include <iostream>
//#include <math.h>
//#include <algorithm>
//#include <iomanip>
//using namespace std;
//
//int main()
//{
////    | b - c | < a < b + c
////    | a - c | < b < a + c
////    | a - b | < c < a + b
//
//    double a, b ,c;
//    cin >> a >> b >> c;
//    cout << fixed << setprecision(1);
//
//    if((fabs(b - c) < a && a < (b + c)) && (fabs(a - c) < b && b < (a + c)) && (fabs(a - b) < c && c < (a + b)))
//    {
//        cout << "Perimetro = " << a + b + c << endl;
//    } else
//    {
//        cout << "Area = " << ((a + b) / 2) * c << endl;
//    }
//
//    return 0;
//}

//#include <iostream>
//#include <math.h>
//#include <algorithm>
//#include <iomanip>
//using namespace std;
//
//int main()
//{
//    double a, b, horas;
//
//    cin >> a >> b;
//
//    if (a > b) {
//        horas = 24 - a + b;
//    }
//    else if (a == b) {
//        horas = 24;
//    }
//    else {
//        horas = b - a;
//    }
//
//    cout << "O JOGO DUROU " << horas << " HORA(S)" << endl;
//
//    return 0;
//}


//#include <iostream>
//#include <math.h>
//#include <algorithm>
//#include <iomanip>
//#include <map>
//using namespace std;
//
//int main()
//{
//    string a, b , c;
//    cin >> a >> b >> c;
//
//    map<string, map<string, map<string, string>>> animal;
//
//    animal["vertebrado"]["ave"]["carnivoro"] = "aguia";
//    animal["vertebrado"]["ave"]["onivoro"] = "pomba";
//    animal["vertebrado"]["mamifero"]["onivoro"] = "homem";
//    animal["vertebrado"]["mamifero"]["herbivoro"] = "vaca";
//    animal["invertebrado"]["inseto"]["hematofago"] = "pulga";
//    animal["invertebrado"]["inseto"]["herbivoro"] = "lagarta";
//    animal["invertebrado"]["anelideo"]["hematofago"] = "sanguessuga";
//    animal["invertebrado"]["anelideo"]["onivoro"] = "minhoca";
//
//    cout << animal[a][b][c] << endl;
//
//    return 0;
//
////    vertebrado
////    mamifero
////    onivoro
//
//
////    vertebrado
////    ave
////    carnivoro
//
//}


//#include <iostream>
//#include <math.h>
//#include <algorithm>
//#include <iomanip>
//#include <map>
//using namespace std;
//
//int main()
//{
//    int total = 0, casos, quantidadeAlunos;
//    cin >> casos;
//
//    while (casos) {
//
//        cin >> quantidadeAlunos;
//
//        int notas[quantidadeAlunos];
//        double acimaDaMedia = 0;
//        total = 0;
//
//        for (int i = 0; i < quantidadeAlunos; i++) {
//            cin >> notas[i];
//            total += notas[i];
//        }
//
//        double media = total / quantidadeAlunos;
//
//        for (int i = 0; i < quantidadeAlunos; i++) {
//            if (notas[i] > media) acimaDaMedia++;
//        }
//
//        cout << fixed << setprecision(3);
//        cout << acimaDaMedia / quantidadeAlunos * 100 << "%" << endl;
//
//
//        casos--;
//    }
//
//    return 0;
//}

/*
#include <iostream>
#include <map>
#include <utility>
#include <cmath>

using namespace std;

int main()
{
    int hora_inicial, minuto_inicial, hora_final, minuto_final;
    
    cin >> hora_inicial >> minuto_inicial >> hora_final >> minuto_final;
    
    int tempo = (hora_final * 60 + minuto_final) - (hora_inicial * 60 + minuto_inicial);
    
    int horas = int(tempo / 60);
    int minutos = int(tempo % 60);
    
    bool isEqual = hora_inicial == hora_final && minuto_inicial == minuto_final;
    if (isEqual)   horas = 24;
    if (minuto_inicial > minuto_final) {
        if (hora_final == hora_inicial) {
            horas = 23;
        }
        minutos = 60 - minuto_inicial - minuto_final;
    }
    
    cout << "O JOGO DUROU " << horas << " HORA(S) E " << minutos << " MINUTO(S)"<< endl;
    
    return 0;
}
 */

//#include <iostream>
//#include <math.h>
//using namespace std;
//int main(int argc, char const *argv[]) {
//
//    double a, b, c;
//
//    cin >> a >> b >> c;
//
////    se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
////    se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
////    se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
////    se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
////    se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
////    se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES
//
//    if(a >= (b + c)) cout << "NAO FORMA TRIANGULO\n";
//    else {
//        if(a * a == b * b + c * c) cout << "TRIANGULO RETANGULO\n";
//        if(a * a > (b * b + c * c)) cout << "TRIANGULO OBTUSANGULO\n";
//        if(a * a < b * b + c * c) cout << "TRIANGULO ACUTANGULO\n";
//        if (a == b && b == c) cout << "TRIANGULO EQUILATERO\n";
//        else if (a == b || c == b || c == a) cout << "RIANGULO ISOSCELES\n";
//    }
//
//    
//    return 0;
//}

//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//int main() {
//
//    double media1, media2;
//    cin >> media1 >> media2;
//    media1 *= 3.5;
//    media2 *= 7.5;
//
//    double media = (media1 + media2) / 11;
//
//
//    cout << fixed << setprecision(5);
//    cout << "MEDIA = " << media << endl;
//
//
//    return 0;
//}

#include <stdio.h>
int main()
{
    double A,D,E;
    scanf ("%lf",&A);
    int N,a,b,c,d,e,f,g,h,i,j,k,l,B,m,n,o,p,q,r,s,t,u;
    N=A;
    a=N/100;
    b=N%100;
    c=b/50;
    d=b%50;
    e=d/20;
    f=d%20;
    g=f/10;
    h=f%10;
    i=h/5;
    j=h%5;
    k=j/2;
    l=j%2;
    
    E=A*100;
    B=(int) E;
    m=B%100;
    n=m/50;
    o=m%50;
    p=o/25;
    q=o%25;
    r=q/10;
    s=q%10;
    t=s/5;
    u=s%5;
    
    printf ("NOTAS:\n");
    printf ("%d nota(s) de R$ 100.00\n",a);
    printf ("%d nota(s) de R$ 50.00\n",c);
    printf ("%d nota(s) de R$ 20.00\n",e);
    printf ("%d nota(s) de R$ 10.00\n",g);
    printf ("%d nota(s) de R$ 5.00\n",i);
    printf ("%d nota(s) de R$ 2.00\n",k);
    printf ("MOEDAS:\n");
    printf ("%d moeda(s) de R$ 1.00\n",l);
    printf ("%d moeda(s) de R$ 0.50\n",n);
    printf ("%d moeda(s) de R$ 0.25\n",p);
    printf ("%d moeda(s) de R$ 0.10\n",r);
    printf ("%d moeda(s) de R$ 0.05\n",t);
    printf ("%d moeda(s) de R$ 0.01\n",u);
    
    return 0;
}
