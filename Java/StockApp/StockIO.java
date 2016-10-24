
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/**
 *
 * @author David Thomsen
 */
public class StockIO {

    private String fileName;

    public StockIO() {
        fileName = "";
    }

    public StockIO(String file) {
        setFileName(file);
    }

    public ArrayList<Stock> getData() throws Exception {
        BufferedReader br = null;
        ArrayList<Stock> list = new ArrayList<Stock>();
        try {
            String line;
            br = new BufferedReader(new FileReader(fileName));
            while ((line = br.readLine()) != null) {
                String[] s = line.split("\\s");
                if (s.length != 4) {
                    throw new Exception("Invalid input, please check your input file!!!");
                }
                Stock stock = new Stock(s);
                list.add(stock);
            }
        } catch (IOException e) {
            e.printStackTrace();
            throw e;
        } finally {
            br.close();
        }
        return list;
    }

    public void saveData(List<Stock> stockList) {
        try {

            File file = new File(fileName);

            // if file doesnt exists, then create it
            if (!file.exists()) {
                file.createNewFile();
            }

            FileWriter fw = new FileWriter(file.getAbsoluteFile());
            BufferedWriter bw = new BufferedWriter(fw);
            for (Stock stock: stockList) {
                bw.write(stock.getCompanyName() + " " + stock.getNumberShares() + " " + stock.getCurrentPrice() + " " + stock.getPurchasePrice() + "\n");
            }
            bw.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    public void setFileName(String file) {
        fileName = file;
    }
}
