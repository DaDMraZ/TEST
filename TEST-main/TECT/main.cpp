
#include "TXLib.h"

bool click(int x)
{
 return( txMouseButtons()==1
 && txMouseX()> x && txMouseX()<x+300 &&
 txMouseY()>510 && tx MouseY()<570 );





}







int main()
    {
    txCreateWindow (1101, 528);
    txTextCursor (false);

    HDC kingS = txLoadImage("��������/kingS.bmb");

    txSetColor (TX_WHITE);
    txSetFillColor (TX_TRANSPARENT);
    txRectangle (850, 20, 1040, 50); //����� ������
    txRectangle (280, 40, 800, 110);  // ������
    txRectangle (50, 150, 340, 400);// �������� 1
    txRectangle (370, 150, 680, 400);//�������� 2
    txRectangle (700, 150, 980, 400);//�������� 3
    txRectangle (50, 420, 340, 470);// ����� 1
    txRectangle (370, 420, 680, 470);//����� 2
    txRectangle (700, 420, 980, 470);//����� 3

    txSetColor (TX_LIGHTGREEN);
    txSelectFont ("Times", 40);
    txSetTextAlign (TA_CENTER);




    txDrawText (850, 20, 1040, 50, "������");

    txDrawText (280, 40, 800, 110, "������1241213131313");

    txBitBlt ( 50, 150, 340, 400, kingS);
    //txBitBlt (850, 20, 1040, 50, );
   // txBitBlt (850, 20, 1040, 50, "������");

    txDrawText (50, 420, 340, 470, "����� 1");
    txDrawText (370, 420, 680, 470, "����� 2");
    txDrawText (700, 420, 980, 470, "����� 3");




    return 0;
    }

