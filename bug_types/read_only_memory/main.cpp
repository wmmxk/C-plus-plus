int main(){

	/* the string "GFG" is stored in a shared read only location; 
	 * but the pointer str is stored in a read-write memory. So you
	 * can change str to point something else but cannot change value
	 * at present str*/
	char *str = "GFG";
	*(str+1) = 'B';
	return 0;

}
