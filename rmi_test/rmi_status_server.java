import java.rmi.Naming;
import java.rmi.registry.LocateRegistry;
public class rmi_status_server {
	public static final String RMI_URL = "rmi://localhost:8088/query" ;
	public static void  main(String [] args){
		try{
			rmi_status_impl echo_er  =  new rmi_status_impl();
			LocateRegistry.createRegistry(8088);
			Naming.rebind(RMI_URL, echo_er);
			System.out.println("Server ready");
		} catch (Exception e){
			e.printStackTrace();
		}
	}
}
