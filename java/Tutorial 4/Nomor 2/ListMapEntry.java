// Nama  : Muhammad Gilang Ramadhan
// NIM   : 13520137
// Tutorial 4
// ListMapEntry.java
// 17 Maret 2022

public class ListMapEntry extends MapEntry {
    private ListMapEntry next;

    public ListMapEntry(String key, String value) { 
        super(key, value); //super(key, value);
        next = null; // next = null;
    } 
    
    public ListMapEntry(String key, String value, ListMapEntry next) { 
        super(key, value);
        this.next = next;
    }

    public ListMapEntry getNext() { 
        return next;
    }
    public void setNext(ListMapEntry next) { 
        this.next = next;
    }
}