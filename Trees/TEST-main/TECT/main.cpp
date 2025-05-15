
#include "TXLib.h"

void Maket()
{
    txSetColor(TX_WHITE);
    txSetFillColor(TX_TRANSPARENT);
    txRectangle(850, 20, 1040, 50); //����� ������
    txRectangle(280, 40, 800, 110);  // ������
    txRectangle(50, 150, 340, 400);// �������� 1
    txRectangle(370, 150, 680, 400);//�������� 2
    txRectangle(700, 150, 980, 400);//�������� 3
    txRectangle(50, 420, 340, 470);// ����� 1
    txRectangle(370, 420, 680, 470);//����� 2
    txRectangle(700, 420, 980, 470);//����� 3
 }


struct Forma
{
  string text_question;
  HDC picture_answer1;
  HDC picture_answer2;
  HDC picture_answer3;
  string text_answer1;
  string text_answer2;
  string text_answer3;


 void draw()
 {
    txDrawText (280, 40, 800, 110, text_question.c_str());// ������

    txBitBlt(txDC(), 50, 150, 340, 400, picture_answer1);  //  �������� 1
    txBitBlt(txDC(), 370, 150, 680, 400, picture_answer2); //�������� 2
    txBitBlt(txDC(), 370, 150, 680, 400, picture_answer3);  //�������� 3

    txDrawText (50, 420, 340, 470, text_answer1.c_str());  // ����� 1
    txDrawText (370, 420, 680, 470,  text_answer2.c_str());    //����� 2
    txDrawText (700, 420, 980, 470,  text_answer3.c_str());   //����� 3

 }

};



bool click(int x)
{
 return( txMouseButtons()==1 &&
        txMouseX()> x && txMouseX()<x+300 &&
        txMouseY()>510 && txMouseY()<570 );
}






int main()
    {
    txCreateWindow (1101, 528);
    txTextCursor (false);

    Forma forma1 = {"����� ���c ����������� ������ �����",
                   txLoadImage("��������/kingS.bmp"),
                   txLoadImage("��������/kingP.bmp"),
                   txLoadImage("��������/Glas.bmp"),
                   "������ �������",
                   "�������� ����",
                   "���� ������"};


   int n_question = 1;
   int count_question = 2;


  while(n_question <= count_question)
  {

    txSetFillColor(TX_BLACK);
    //txClean();
    txBegin();





    txSetColor (TX_LIGHTGREEN);
    txSelectFont ("Times", 40);
    txSetTextAlign (TA_CENTER);


    txDrawText (850, 20, 1040, 50, "������1");   //�����

    if(n_question==1)
    {
        forma1.draw();
    }

    if(click(50))
       {
        while(txMouseButtons()==1) txSleep(50);
        n_question ++;
       }

  if(click(370))
       {
        while(txMouseButtons()==1) txSleep(370);
        n_question ++;
       }

  if(click(700))
       {
        while(txMouseButtons()==1) txSleep(700);
        n_question ++;
       }




   txEnd();
   txSleep(20);

      }

    return 0;
    }

