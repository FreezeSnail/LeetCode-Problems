#1108. Defanging an IP Address
def defangIPaddr(self, address):
    """
    :type address: str
    :rtype: str
    82% faster
    50% less mem
    """
    output = ""
    for char in address:
        if(char == '.'):
            output = output + '[.]'
        else:
            output += char
            
    return output

def defangIPaddr(self, address):
    """
    :type address: str
    :rtype: str
    20% faster
    91% less mem
    """
    return address.replace('.', '[.]')