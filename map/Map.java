import java.util.HashMap;
public class Map{
  public static int print(HashMap<String,Integer> map)
    {
        System.out.println(map);
        return 0;
    }
    public static int find(HashMap<String,Integer> map)
    {
        if(map.containsKey("kishore"))
        {
            int a= map.get("kishore");
            System.out.print(a);
        }
        return 0;
    }
    public static void main(String args[])
    {
        HashMap<String,Integer> map = new HashMap<String,Integer>();
        map.put("kishore",90);
        map.put("goku",92);
        map.put("Vegata",89);
        print(map);
        find(map);
    }
}