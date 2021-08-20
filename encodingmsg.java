//Encoding Message
import java.util.*;
public class encodingmsg
{
    public static void main(String args[])
    {
    String st,s="";char chr,ch3;int c;String str="";
    int i=0,j=1,l=0; char t,ch1,ch2;
    Scanner sc=new Scanner(System.in);
        int T;
      T=sc.nextInt();
      for(int f=0;f<T;f++)
      {
        i=0;j=1;s="";
        l=sc.nextInt();
    st=sc.next();
    
    l=l/2;
    while(l!=0)
    {
        ch1=st.charAt(i);
        ch2=st.charAt(j);
        t=ch1;
        ch1=ch2;
        ch2=t;
        s=s+ch1+ch2;
        i+=2;
        j+=2;
        l--;
    }
    if((st.length()%2)!=0)
    {
        s=s+st.charAt(st.length()-1);
    System.out.println(s);
    }
    else
    {
    System.out.println(s);
    }
     str="";
    for(int k=0;k<s.length();k++)
             {
          chr=s.charAt(k);
          c=((int)(chr))+25-(((int)(chr)-97)*2);
          ch3=(char)(c);
          str=str+ch3;   
    }
    System.out.println(str);
    }
    sc.close();
}

}

