int main() {
  for(char d[80]={1,8,-1,-8},*m=d+8,h=52,l=4,v=3,w=v,c,*s="dsawDSAW|\n|%c`|%c",e=0,i,a=(srand((int)m),4);!e;Sleep(*s)){
    for(system("cls");kbhit();)for(c=getch(),i=0;i<8;++i)v=s[i]==c&i+w?i%4:v;
    if(!(e=m[h+=d[w=v]]))if(m[h]=l,!(e=l>63|h&192|!(v^2|h%8^7&&v|h%8))&h==a)for(++l;m[a=rand()%64];);
    for(i=0;i<64;++i)m[i]-=!!m[i],printf(s+8+3*!!(i%8)+!i,"@ *"[!m[i]+(i==a)],i<63?8:0);
  }
}