import java.net.MalformedURLException;
import java.rmi.Naming;
import java.rmi.NotBoundException;
import java.rmi.RemoteException;

public class rmi_status_client {
	public static void main(String[] args){
		try{
			rmi_status rs = (rmi_status)Naming.lookup(rmi_status_server.RMI_URL);
			rmi_file   rf = rs.get_rmi_file("markxiao.txt");
			rf.echo();
//			System.out.println(rf);
		} catch(RemoteException e){
			e.printStackTrace();
		} catch(MalformedURLException e){
			e.printStackTrace();
		} catch(NotBoundException e){
			e.printStackTrace();
		}
	}
}
