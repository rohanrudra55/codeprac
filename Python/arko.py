mylist=[1,3,5,6,7,[3,4,5],"hello"]
print("Mylist: ",mylist,end='\n\n')

print("-----Inserting an elemnt-----")
idx=input("Enter index to inser: ")
ele=input("Element to insert: ")
mylist.insert(int(idx),ele)
print("Mylist after insertion: ",mylist,end='\n\n')

print("-----Removing an element-----")
ele=input("Element to remove: ")
mylist.remove(ele)
print("Mylist after removing: ",mylist,end='\n\n')

print("-----Appending an element-----")
ele=input("Element to append: ")
mylist.append(ele)
print("Mylist after removing: ",mylist,end='\n\n')


print("-----Pop an element-----")
idx=input("Element to pop: ")
mylist.pop(int(idx))
print("Mylist after popping: ",mylist,end='\n\n')


print("-----Clearing list-----")
mylist.clear()
print("Mylist after clearing: ",mylist,end='\n\n')