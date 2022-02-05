
#include <iostream>
#include <string>

int main(int argc, char** argv)
{
    cout << "You have entered " << argc
         << " arguments:" << "\n";
  
    //for (int i = 0; i < argc; ++i)
    //    cout << argv[i] << "\n";
	
	string pertableNames [] ={"H"   ,"He"   ,"Li"   ,"Be"   ,"B"   ,"C"   ,"N"   ,"O"   ,"F"   ,"Ne"   ,"Na"   ,"Mg"   ,"Al"   ,"Si"   ,"P"   ,"S"   ,"Cl"   ,"Ar"   ,"K"   ,"Ca"   ,"Sc"   ,"Ti"   ,"V"   ,"Cr"   ,"Mn"   ,"Fe"   ,"Co"   ,"Ni"   ,"Cu"   ,"Zn"   ,"Ga"   ,"Ge"   ,"As"   ,"Se"   ,"Br"   ,"Kr"   ,"Rb"   ,"Sr"   ,"Y"   ,"Zr"   ,"Nb"   ,"Mo"   ,"Tc"   ,"Ru"   ,"Rh"   ,"Pd"   ,"Ag"   ,"Cd"   ,"In"   ,"Sn"   ,"Sb"   ,"Te"   ,"I"   ,"Xe"   ,"Cs"   ,"Ba"   ,"La"   ,"Ce"   ,"Pr"   ,"Nd"   ,"Pm"   ,"Sm"   ,"Eu"   ,"Gd"   ,"Tb"   ,"Dy"   ,"Ho"   ,"Er"   ,"Tm"   ,"Yb"   ,"Lu"   ,"Hf"   ,"Ta"   ,"W"   ,"Re"   ,"Os"   ,"Ir"   ,"Pt"   ,"Au"   ,"Hg"   ,"Tl"   ,"Pb"   ,"Bi"   ,"Po"   ,"At"   ,"Rn"   ,"Fr"   ,"Ra"   ,"Ac"   ,"Th"   ,"Pa"   ,"U"   ,"Np"   ,"Pu"   ,"Am"   ,"Cm"   ,"Bk"   ,"Cf"   ,"Es"   ,"Fm"   ,"Md"   ,"No"   ,"Lr"   };	
	float pertableMolmas [] ={1.0079,4.0026 ,6.9412 ,9.0122 ,10.811,12.011,14.007,15.999,18.998,20.180 ,22.990 ,24.305 ,26.982 ,28.086 ,30.974,32.066,35.453 ,39.948 ,39.098,40.078 ,44.956 ,};
	
	
	
	
	cout << sizeof(pertableNames)/sizeof(pertableNames[0]); //prints length of elemental letter array
	
    return 0;
}







