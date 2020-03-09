


import time
from python_version import GoldiloxAPIClientConnection


def helloAPI_side_1() -> None:

    sockfd = GoldiloxAPIClientConnection(
        host='127.0.0.1', port=4242
    )

    while True:

        filename = input('What file would you like to send?')
        if filename[0] == '\n' or len(filename) == 0:
            continue 

        sockfd.FileSender(filename)
        
        #time.sleep(1)
        other_said = sockfd.Recv()
        print('other side said ', other_said)
        other_said = ''

if __name__ == '__main__':
    helloAPI_side_1()

