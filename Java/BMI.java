import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.text.*;
 
public class BMI extends JFrame
{
   private JLabel lblHeader;
 
   private JLabel lblHeight;
   private JTextField txtHeight;
   private JLabel lblM;
 
   private JLabel lblWeight;
   private JTextField txtWeight;
   private JLabel lblKg;
 
   private JLabel lblBmi;
   private JLabel lblBmiOutput;
 
   private JLabel lblAdvice;
   private JLabel lblAdviceOutput;
 
   private JButton btnProceed;
   private JButton btnExit;
 
 
    public BMI()
    {
        lblHeader = new JLabel("BMI Advisor");
 
        lblHeight = new JLabel("Height");
        txtHeight = new JTextField(5);
        lblM = new JLabel("m");
 
        lblWeight = new JLabel("Weight");
        txtWeight = new JTextField(5);
        lblKg = new JLabel("kg");
 
        lblBmi = new JLabel("BMI");
        lblBmiOutput = new JLabel();
 
        lblAdvice = new JLabel("Advice");
        lblAdviceOutput = new JLabel();
 
        btnProceed = new JButton("Proceed");
        btnExit = new JButton("Exit");
 
        JPanel panel = (JPanel)getContentPane();
 
        //null layout
        panel.setLayout(null);
        lblHeader.setBounds(120,20,200,30);
        lblHeader.setFont(new Font ("Arial", Font.BOLD, 30));
 
        lblHeight.setBounds(50,70,40,20);
        txtHeight.setBounds(100,70,40,20);
        lblM.setBounds(150,70,40,20);
 
        lblWeight.setBounds(50,100,40,20);
        txtWeight.setBounds(100,100,40,20);
        lblKg.setBounds(150,100,40,20);
 
        lblBmi.setBounds(50,130,40,20);
        lblBmiOutput.setBounds(100,130,40,20);
 
        lblAdvice.setBounds(50,160,40,20);
        lblAdviceOutput.setBounds(100,160,40,20);
 
        btnProceed.setBounds(270,130,90,20);
        btnExit.setBounds(270,160,90,20);
 
        panel.add(lblHeader);
        panel.add(lblHeight);
        panel.add(txtHeight);
        panel.add(lblM);
        panel.add(lblWeight);
        panel.add(txtWeight);
        panel.add(lblKg);
        panel.add(lblBmi);
        panel.add(lblBmiOutput);
        panel.add(lblAdvice);
        panel.add(lblAdviceOutput);
        panel.add(btnProceed);
        panel.add(btnExit);
 
        btnProceed.addActionListener(new MyListener());
        btnExit.addActionListener(new MyListener()); 
 
        setTitle("BMI");
        setSize(400,250);
        setVisible(true);
    }
 
    public double calBmi (double bmi) 
    {
        return bmi;
    }
 
    public class MyListener implements ActionListener
    {
        public void actionPerformed(ActionEvent e)
        {
 
        if (e.getSource() == btnProceed)
        {
            double weight = 0.0f;
            double height = 0.0f;
            
            try
            {   
                      
            } catch (NumberFormatException ex)
            {
                lblAdviceOutput.setText("Invalid input!");
            } 
 
                //ERROR HERE..
                double bmi = weight/(2*height);
 
                    if (bmi > 18.5)
                        {
                            lblAdviceOutput.setText("You are underweight.");
                        } 
                    if (bmi >23.0)
                        {
                            lblAdviceOutput.setText("You are overweight.");
                        }
                    else
                        {        
                            lblAdviceOutput.setText("You are normal weight.");
                        } 
 
        }
        else if (e.getSource() == btnExit)
            System.exit(0);
        }   
    }
 
 
 
 
    public static void main (String [] args)
    {
        new BMI();
    }
 
}
