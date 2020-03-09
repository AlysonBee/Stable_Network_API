


from python_version import GoldiloxAPIClientConnection

import time

def helloAPI_side_2():

    sockfd = GoldiloxAPIClientConnection(
        host='127.0.0.1', port=4321
    )

    while True:

        side_said = sockfd.Recv()
        
       # time.sleep(1)
        print('side said ', side_said)
      
    
if __name__ == '__main__':

    helloAPI_side_2()
