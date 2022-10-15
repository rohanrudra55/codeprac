import edu.duke.*;
import java.io.File;

class demo{
    public void runHello(){
        FileResource res=new FileResource("hello_universe");
        for(String line :res.lines()){
            System.out.println(line);
        }
    }
}