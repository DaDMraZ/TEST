#include <iostream>

using namespace std;

string getPart(string str, int *pos2)
{
    int pos1 = *pos2 + 1;
    *pos2 = str.find(",",1);
    string part = str.substr(pos1, pos2 - pos1);
    return part;







 return part;
}


int main()
{
    setlocale(LC_ALL, "Russian");

   ifstream file("text.txt");


    cout << "Hello world!" << endl;
    while(file.good())
    {

     getline(file , str);



    int pos2 = -1;


    string text_question = getPart(str , &pos2);
    string picture_answer1 = getPart(str , &pos2);
    string text_answer1 = getPart(str , &pos2);
    string picture_answer2 = getPart(str , &pos2);
    string text_answer2 = getPart(str , &pos2);
    string picture_answer3 = getPart(str , &pos2);
    string text_answer3 = getPart(str , &pos2);
    string n_right_answer1 = getPart(str , &pos2);




    cout << str << endl;
    cout << text_question << endl;
    cout << picture_answer1 << endl;
    cout << text_answer1 << endl;

   }

    return 0;
}
