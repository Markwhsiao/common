object:class client server
class:
	javac *.java
client: rmi_file.class  rmi_status.class rmi_status_client.class
	jar -cvf  client.jar rmi_file.class  rmi_status.class rmi_status_client.class 
server: rmi_file.class rmi_status.class rmi_status_impl.class rmi_status_server.class
	jar -cvf  server.jar   rmi_file.class rmi_status.class rmi_status_impl.class rmi_status_server.class
clean:
	   rm -rf *.class *.jar
