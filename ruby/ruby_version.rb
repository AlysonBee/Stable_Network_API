

require 'socket'

class GoldiloxAPIClientConnection

	def initialize(host, port)
		@sockfd = TCPSocket.open(host, port)
		@sockfd.puts "API\0"
		progress = @sockfd.gets
		if progress != "API_0K\n"
			puts "Error connecting to valid daemon. Closing connection"
			@sockfd.close
		end
		print('Connected	')
		Signal.trap("INT") {
			signal_catcher
			exit
		}
	end


	def signal_catcher
		puts "Terminating connection..."
		# send termination message.	
	end


	def 

	def receive_number_size
		number_size = @sockfd.gets
	end

	def Send(buffer)
		size = buffer.length
		self.sending_number_size(size)
		self.buffered_send(buffer, size)
	end


	def self.sending_number_size(size)
		number = size.to_i
		progress_message = ''

		number = number + "\0"
		@sockfd.puts number
		progress_message = @sockfd.gets

		if progress_message != "0K"
			puts "Synchronization error with daemon. Closing connection."
			@sockfd.close
			exit
		end
	end


	def self.buffered_send(bytearray, size)
		counter = 0
		sent = 0
		chunk = ''
		chunk_counter = 0

		if buffer.length < 4096
			@sockfd.send buffer
			return 
		end

		while counter < size
			chunk = bytearray.slice(chunk_counter, chunk_counter + 4096)
			@sockfd.send chunk
			chunk_counter += 4096
			counter += 4096
		end
	end


end



new_connection = GoldiloxAPIClientConnection.new('127.0.0.1', 4242)
while true
	
end





