import javax.swing.JFrame;
public class helloWorldSwing{
    public static void main(String[] args) {
        JFrame frame = new JFrame();
        frame.setTitle("Hello World Java GUI");  
        frame.setSize(800, 500);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);   
        frame.setVisible(true);
    }
}