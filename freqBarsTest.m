close all
clear
clc


N = 1024;
n = 0:N-1;

w0 = 2*pi/5;
x = sin(w0*n)+10*sin(2*w0*n);

s = spectrogram(x);

spectrogram(x,'yaxis')


[y,fs]=audioread("Dirt Man.mp3");


%wavread = reads WAV-file
%y = samples
%fs = sampling frequency 
%'UnchainMyHeart' =  WAV-file

t=linspace(0,length(y)/fs,length(y));

%linspace = creating time vector
%0= start time
%length(y)/fs = end time
%length(y) = number of samples in y

signal = plot(t,y);
L = xline(0, LineWidth=5);
drawnow

Nfft=1024;
%Nfft = length of fft

f=linspace(2e2,2e5,Nfft);
%f =creating frequency vector
%0 = start time
%fs = End time
%Nfft = Length of the frequency vector

X=abs(fft(y,Nfft));
%G = the fft of the samples y in 1024 points

figure ;
fftPlot = semilogy(f(1:Nfft/2),X(1:Nfft/2));
axis([2e2, 2e5, 1e-3, 200])


for i = 1:Nfft:length(y)
    L.Value = i/fs; 
    X=abs(fft(y(i:i+Nfft),Nfft));
    fftPlot.YData = X(1:Nfft/2);
    % fftPlot = plot(f(1:Nfft/2),X(1:Nfft/2));

    drawnow expose

end


