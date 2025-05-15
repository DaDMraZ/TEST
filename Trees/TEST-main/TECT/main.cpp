
#include "TXLib.h"

void Maket()
{
    txSetColor(TX_WHITE);
    txSetFillColor(TX_TRANSPARENT);
    txRectangle(850, 20, 1040, 50); //íîìåð âîïðîñ
    txRectangle(280, 40, 800, 110);  // âîïðîñ
    txRectangle(50, 150, 340, 400);// êàðòèíêà 1
    txRectangle(370, 150, 680, 400);//êàðòèíêà 2
    txRectangle(700, 150, 980, 400);//êàðòèíêà 3
    txRectangle(50, 420, 340, 470);// îòâåò 1
    txRectangle(370, 420, 680, 470);//îòâåò 2
    txRectangle(700, 420, 980, 470);//îòâåò 3
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
    txDrawText (280, 40, 800, 110, text_question.c_str());// ÂÎÏÐÎÑ

    txBitBlt(txDC(), 50, 150, 340, 400, picture_answer1);  //  ÊÀÐÒÈÍÊÀ 1
    txBitBlt(txDC(), 370, 150, 680, 400, picture_answer2); //ÊÀÐÒÈÍÊÀ 2
    txBitBlt(txDC(), 370, 150, 680, 400, picture_answer3);  //ÊÀÐÒÈÍÊÀ 3

    txDrawText (50, 420, 340, 470, text_answer1.c_str());  // ÎÒÂÅÒ 1
    txDrawText (370, 420, 680, 470,  text_answer2.c_str());    //ÎÒÂÅÒ 2
    txDrawText (700, 420, 980, 470,  text_answer3.c_str());   //ÎÒÂÅÒ 3

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

    Forma forma1 = {"Êàêîé áîñc ïðèçûâàåòñÿ òîëüêî íî÷üþ",
                   txLoadImage("ÊÀÐÒÈÍÊÈ/kingS.bmp"),
                   txLoadImage("ÊÀÐÒÈÍÊÈ/kingP.bmp"),
                   txLoadImage("ÊÀÐÒÈÍÊÈ/Glas.bmp"),
                   "Êîðîëü Ñëèçíåé",
                   "Êîðîëåâà ï÷¸ë",
                   "Ãëàç Êòóëõó"};


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


    txDrawText (850, 20, 1040, 50, "Âîïðîñ¹1");   //ÍÎÌÅÐ

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

