class JVMThread extends Thread{

	public void run(){
	
		for(int i=0 ; i< 500 ;i++){
		
			try{
			
				Thread.sleep(2000);
			}catch(InterruptedException ie){
			
			}
			System.out.println("I Am Running "+Thread.currentThread().getName());

		}
	}

}
class MainThread{

	public static void main(String[] args){
	
		JVMThread t1 = new JVMThread();
		JVMThread t2 = new JVMThread();
		JVMThread t3 = new JVMThread();

		t1.start();
		t2.start();
		t3.start();
	}
}
