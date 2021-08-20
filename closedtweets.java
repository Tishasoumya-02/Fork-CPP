import java.io.*;
import java.util.*;
public class closedtweets {
public static void main(String args[])
{
    int N,k,a;String st;char ch;
    Scanner sc=new Scanner(System.in);
    N=sc.nextInt();
    k=sc.nextInt();
     int a[]=new int[N];
     for(int i=0;i<k;i++)
     {
        st=sc.nextLine();
        a = Integer.parseInt(String.valueOf(st.charAt(6)));
         System.out.println(a);

     }

}
}
