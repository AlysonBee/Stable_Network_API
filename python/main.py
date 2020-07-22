

import python_version



def client():

    client = GoldiloxAPIClientConnection('127.0.0.1', 4242)

    while True:
        client.Send('hello server')

        buffer = client.Recv()
        print(f'buffer is {buffer}')

if __name__ == '__main__':
    client()
