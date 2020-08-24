/*
 Application: Inventory Management System
 Compiled on: Borland Turbo C++ 3.0
*/
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#include<graphics.h>
#include<string.h>


#define TRUE 1
#define FALSE 0

/*List of Global variables used in the application */
int mboxbrdrclr, mboxbgclr , mboxfgclr; /*to set color for all message boxes in the application*/
int menutxtbgclr , menutxtfgclr, appframeclr; //to set the frame and color's for menu items
int setion1_symb, section1_bgclr, section1_fgclr; // to set color of setion 1 , the region around the menu option
int section2_symb, section2_bgclr, section2_fgclr; //to set color of setion 2 , the section on the right of the menu option
int fEdit;
int animcounter;
static struct struct_stock /*main database structure*/
{
  char itemcode[8];
  char itemname[50];
  float itemrate;
  float itemqty;
  int minqty;
}inv_stock;
struct struct_bill
{ char itemcode[8];
  char itemname[50];
  float itemrate;
  float itemqty;
  float itemtot;
}item_bill[100];
char password[8];
const long int stocksize=sizeof(inv_stock);