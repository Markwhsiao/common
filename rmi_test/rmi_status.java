import java.rmi.Remote;
import java.rmi.RemoteException;

public interface rmi_status extends Remote{
	rmi_file get_rmi_file(String s) throws RemoteException;
}
