//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	//Se inicializan los valores y variables
	int X=300,Y=200,X2=200,Y2=300;
	int x,y,xd,yd,p,xi,yi, k;


	xd=abs(X2-X);
	yd=abs(Y2-Y);

	if(xd>yd)
	{
		p=xd;
	} else
	{
		p=yd;
	}

	xi=xd/p;
	yi=yd/p;

	if(X>X2)
		xi*=(-1);
	if(Y>Y2)
		yi*=(-1);

	x=X;
	y=Y;

	for(k=1; k<=p; k++)
	{
		x+=xi;
		y+=yi;
		Canvas->Pixels[x][y] = clWhite;   // renderiza la linea
		Sleep(30); // permite ver el render de la linea
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	int x1=50,y1=100,x2=150,y2=200;
	int dy,dx,ix,iy,e,x,y;


	dy=y2-y1;
	dx=x2-x1;
	ix=2*dx;
	iy=2*dy;
	y=y1;
	e=iy-dx;

	for(x=x1;x<=x2;x++)
	{
		Canvas->Pixels[x][y] = clGreen; //renderiza la linea
		Sleep(30); //permite ver el render de la linea
		e+=iy;
		if(e>0){
			y++;
			e-=ix;
		}
   }
}
//---------------------------------------------------------------------------
