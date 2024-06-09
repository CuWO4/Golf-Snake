int main(){
  for(char s[99]="dkb[dsaw|\n|%c`|%c",*m=s+18,h=52,l=4,v=3,w=v,g=1,i,a=(srand((int)m),4),o=1,f=1;g;Sleep(*s),o=f=1)for(system("cls");o;)for(g=(o=kbhit())?getch():1,i=3;o?++i<8:f--;v=s[i]==g&i+w?i%4:v)if(!o)for(g=!(m[h+=s[w=v]-99]|h&192)&l<65&&v^2|h%8^7&&v|h%8,m[h]=l+=h==a,i=-1;++i<64;m[i]-=!!m[i])for(printf(s+8+3*!!(i%8)+!i,i^a?"@ "[!m[i]]:42,(i<63)*8);m[a];a=rand()%64);
}