int main() {
  for(char d[80]={1,8,-1,-8},*m=d+8,h=52,l=4,v=3,w=v,c,*s="dsawDSAW|\n|%c`|%c",e=0,i,a=(srand((int)m),4);!e;Sleep(150)){
    for(system("cls");kbhit();)for(c=getch(),i=0;i<8;++i)v=i[s]==c&(i+w)%2?i%4:v;
    if(!(e=m[h+=d[w=v]]))if(h[m]=l,!(e=l>=64|h&192|v==2&h%8==7|!(v||h&7))&h==a)for(++l;a[m];a=rand()%64);
    for(i=0;i<64;++i)i[m]-=!!i[m],printf(s+8+3*!!(i%8)+!i,"@ *"[!i[m]+(i==a)],i<63?8:0);
  }
}