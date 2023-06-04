//To create ADT that implement the "set" concept. a. Add (newElement) -Place a value into
//the set b. Remove (element) Remove the value c. Contains (element) Return true if element
//is in collection d. Size () Return number of values in collection Iterator () Return an iterator
//used to loop over collection e. Intersection of two sets f. Union of two sets g. Difference
//between two sets h.Subset.




elements=[]

def create_set():
    elements = set()

def add(new_element):
    elements.add(new_element)

def remove(element):
    elements.remove(element)

def contains(element):
    return element in elements

def size():
    return len(elements)

def iterator():
    return iter(elements)

def intersection(other_set):
    result_set = create_set()
    for element in elements:
        if other_set.contains(element):
            result_set.add(element)
    return result_set

def union_with(other_set):
    result_set = create_set()
    for element in elements:
        result_set.add(element)
    for element in other_set.iterator():
        result_set.add(element)
    return result_set

def difference(other_set):
    result_set = create_set()
    for element in elements:
        if not other_set.contains(element):
            result_set.add(element)
    return result_set

def is_subset(other_set):
    for element in elements:
        if not other_set.contains(element):
            return False
    return True
