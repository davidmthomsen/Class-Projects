/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Kevin Coles
 */
public class Stock {
    
    private String companyName;
    private int numberShares;
    private double purchasePrice;
    private double currentPrice;
    
    public Stock() {
        
    }

    public Stock(String[] s) {
        try {
            setCompanyName(s[0]);
            setNumberShares(Integer.parseInt(s[1].trim()));
            setPurchasePrice(Double.parseDouble(s[2].trim()));
            setCurrentPrice(Double.parseDouble(s[3].trim()));            
        } catch (Exception e) {
            throw e;
        }
    }

    public Stock(String sName, int nShares, double pPrice, double cPrice) {
        setCompanyName(sName);
        setNumberShares(nShares);
        setPurchasePrice(pPrice);
        setCurrentPrice(cPrice);
    }
    
    public void setCompanyName(String cName) {
        this.companyName = cName;        
    }
    
    public String getCompanyName() {
        return companyName;
    }
    
    public void setNumberShares(int numberShares) {
        this.numberShares = numberShares;
    }
    
    public int getNumberShares() {
        return numberShares;
    }
    
    public void setPurchasePrice(double purchasePrice) {
        this.purchasePrice = purchasePrice;
    }
    
    public double getPurchasePrice() {
        return purchasePrice;
    }

    public void setCurrentPrice(double currentPrice) {
        this.currentPrice = currentPrice;
    }
    
    public double getCurrentPrice() {
        return currentPrice;
    }
    
    /**
     * 
     * @return the profit or loss
     */
    public double getProfitOrLoss() {
        return 	numberShares * (currentPrice - purchasePrice);
    }    
    
    /**
     * 
     * @return stock name
     */
    public String toString() {
        return companyName;
    }
}
