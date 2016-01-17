import java.io.Serializable;
import java.util.Date;

public class rmi_file implements Serializable{
	private static final long serialVersionUID = 0;
	private String filename;
	private long time;
	
	public rmi_file(String file){
		this.filename = file;
		this.time=(new Date()).getTime();
	}
	public String getFilename(){
		return filename;
	}
	public String toString(){
		return "File: " + filename + "Create at" + (new Date(time));
	}
	public void echo(){
		System.out.println("File: " + filename + "Create at" + (new Date(time)));
	}
}
