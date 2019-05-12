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

#include <iostream>
using namespace std;

int main()
{
    string name;
    cout << "enter your name: ";
    getline(cin, name);
    cout << "you name is " << name << endl;
    return 0;
}
