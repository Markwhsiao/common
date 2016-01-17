import java.rmi.RemoteException;
import java.rmi.server.UnicastRemoteObject;

public class rmi_status_impl extends UnicastRemoteObject implements rmi_status {
	private static final long serialVerionUID = -1734182347912834L;

	protected rmi_status_impl() throws RemoteException {
		super();
	}
	@Override
	public rmi_file get_rmi_file(String s) throws RemoteException {
		rmi_file rf = new rmi_file(s);
		System.out.println("method get_rmi_file called");
		return rf;
	}
}
