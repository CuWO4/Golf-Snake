int main() {
  for(char m[64]={},h=52,l=4,v=3,w=v,c,*s="dsawDSAW",d[]={1,8,-1,-8},g=1,i,a=(srand((int)m),4);g;Sleep(150)){
    while(_kbhit())for(c=_getche(),i=0;s[i];++i)if(!(s[i]^c)&(i+w)%2)v=i%4;
    if(h+=d[w=v],(g=!(l==64|h&192|v==2&h%8==7|!(v||h&7)|m[h]))&h==a)for(m[h]=++l;m[a];a=rand()%64);
    if(g)for(m[h]=l,system("cls"),i=0;i<64;++i)m[i]-=!!m[i],printf(&"|\n|%c`|%c"[3*!!(i%8)+!i],"@ *"[!m[i]+(i==a)],i==63?0:8);
  }
}