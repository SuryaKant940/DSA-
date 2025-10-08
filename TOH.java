public class TOH{
    static void toh(int n,char source,char to ,char destination){
        if(n==0) return ;
        toh(n-1,source,destination,to);
        System.out.println("move " +n+ "from "+source+ "to" + to);
        toh(n-1,destination,to ,source);
    }
    public static void main(String[]args){
       // int n = 3;
        toh(3,'A','C','B');
    }
}