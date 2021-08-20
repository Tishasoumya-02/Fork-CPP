public class exceptions
 {
     public static void main(String args[])
     {
    try {
        int a[]={1,2,4,5};
        if(a[4]==0)
        {
            System.out.println("here");
        }
    } 
    catch (ArrayIndexOutOfBoundsException e) {
        System.out.println(e);
       
    }
    
}
 }
