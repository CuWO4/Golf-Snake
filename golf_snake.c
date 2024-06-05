int main() {
  for(char s[99]="dkb[dsaw|\n|%c`|%c",*m=s+18,h=52,l=4,v=3,w=v,c,g=1,i,a=(srand((int)m),4);g;Sleep(*s)){
    for(system("cls");kbhit();)for(c=getch(),i=3;++i<8;)v=s[i]==c&i+w?i%4:v;
    if(g=!m[h+=s[w=v]-99],m[h]=l+=h==a,g&=l<65&!(h&192)&&v^2|h%8^7&&v|h%8)for(i=-1;++i<64;m[i]-=!!m[i],printf(s+8+3*!!(i%8)+!i,i^a?"@ "[!m[i]]:42,(i<63)*8))for(;m[a];a=rand()%64);
  }
}