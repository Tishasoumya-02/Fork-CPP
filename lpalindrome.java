import java.util.*;

import javax.lang.model.util.ElementScanner14;
public class lpalindrome {
    
    String palindrome(String str)
    {
        int l=str.length();char ch;String s="";
        for(int i=l-1;i>=0;i--)
        {
            ch=str.charAt(i);
            s=s+ch;
        }
        return s;
          
    }
    public static void main(String args[])
    {
       
        Scanner sc=new Scanner(System.in);
        int T,l;String st,st1,st2,s1,s2;
        T=sc.nextInt();
        lpalindrome ob=new lpalindrome();
        while(T!=0)
        {   
            st1="";st2="";
           st=sc.nextLine();
           l=st.length();
           if(l%2!=0)
           {
             st1=st.substring(0,((l/2)-1));
             st2=st.substring(((l/2)+1),(l-1));
             s1=ob.palindrome(st1);
             s2=ob.palindrome(st2);
             if(s1.equalsIgnoreCase(s2))
             {
                System.out.println("YES");
             }
             else
             {
                System.out.println("NO");
             }
            }
            else 
            {
                st1=st.substring(0,((l/2)-1));
                st2=st.substring(l/2,(l-1));
                s1=ob.palindrome(st1);
                s2=ob.palindrome(st2);
                if(s1.equalsIgnoreCase(s2))
                {
                   System.out.println("YES");
                }
                else
                {
                   System.out.println("NO");
                }
            }
                 T--;
           }
        }
    }

