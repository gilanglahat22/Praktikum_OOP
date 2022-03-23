// Nama  : Muhammad Gilang Ramadhan
// NIM   : 13520137
// Tutorial 4
// ListMap.java
// 17 Maret 2022

public class ListMap implements Map{
    private ListMapEntry first;

    /**
     * Menambahkan (key, value) ke dalam map
     * Melakukan overwrite jika sudah terdapat elemen dengan key yang sama.
     */
    @Override
    public void set(String key, String value){
        if (first == null) {
            ListMapEntry newEntry = new ListMapEntry(key,value);

            first = newEntry;
        } else {
            ListMapEntry temp = first;
            while (temp.getNext() != null){
                if (temp.getKey().equals(key)){
                    temp.setValue(value);
                    return;
                }else{
                    temp = temp.getNext();
                }
            }
            ListMapEntry newEntry = new ListMapEntry(key,value);
            temp.setNext(newEntry);
        }
    }

    /**
     * Mengembalikan value yang tersimpan untuk key tertentu pada map
     * Mengembalikan NULL apabila map tidak mengandung key masukan.
     */
    @Override
    public String get(String key){
        ListMapEntry temp = first;

        while (temp != null){
            if (temp.getKey().equals(key)){
                return temp.getValue();
            } else{
                temp = temp.getNext();
            }
        }

        return null;
    }

    /**
     * Menghitung jumlah elemen yang ada pada map
     */
    @Override
    public int size(){
        ListMapEntry temp = first;
        int count = 0;
        if (first == null) {
            return 0;
        } else {
            while(temp != null) {
                count += 1;
                temp = temp.getNext();
            }
            return count;
        }
    }
}