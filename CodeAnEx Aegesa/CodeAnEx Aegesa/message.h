#pragma once

class message
{
};

// templates
template <class Message>
Message output(message i)
{
	cout << i << endl;
}
